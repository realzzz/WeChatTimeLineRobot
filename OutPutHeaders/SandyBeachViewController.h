/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "scrollViewDelegate.h"
#import "MMTipsViewControllerDelegate.h"
#import "WeChat-Structs.h"
#import "CanvasManagerDelegate.h"
#import "IBottleSessionExt.h"
#import "MMUIViewController.h"
#import "IBottleMgrExt.h"

@class FishBottleLogicView, UIView, UIImageView, NSString, BottleButton, BottleAnimation, ThrowBottleLogicView, MMScrollView, BottleTipView;

@interface SandyBeachViewController : MMUIViewController <CanvasManagerDelegate, scrollViewDelegate, IBottleSessionExt, IBottleMgrExt, MMTipsViewControllerDelegate> {
	BOOL mIsFirstAppear;
	unsigned long mTimeOfDayType;
	BOOL mIsTouchEnabeld;
	unsigned long mThrowCount;
	unsigned long mFishCount;
	unsigned long mNewBottleCount;
	MMScrollView* mScrollView;
	UIImageView* mBGImageView;
	UIImageView* mMaskImageView;
	UIImageView* mSpotLightView;
	BottleTipView* mBottleTipView;
	BottleAnimation* mBottleAnimation;
	UIView* mBeachFlatView;
	BottleButton* mThrowBtnView;
	BottleButton* mFishBtnView;
	BottleButton* mBottleBtnView;
	ThrowBottleLogicView* mThrowLogicView;
	FishBottleLogicView* mFishLogicView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) FishBottleLogicView* mFishLogicView;
@property(retain, nonatomic) ThrowBottleLogicView* mThrowLogicView;
@property(retain, nonatomic) BottleButton* mBottleBtnView;
@property(retain, nonatomic) BottleButton* mFishBtnView;
@property(retain, nonatomic) BottleButton* mThrowBtnView;
@property(retain, nonatomic) UIView* mBeachFlatView;
@property(retain, nonatomic) BottleAnimation* mBottleAnimation;
@property(retain, nonatomic) BottleTipView* mBottleTipView;
@property(retain, nonatomic) UIImageView* mSpotLightView;
@property(retain, nonatomic) UIImageView* mMaskImageView;
@property(retain, nonatomic) UIImageView* mBGImageView;
@property(retain, nonatomic) MMScrollView* mScrollView;
-(void).cxx_destruct;
-(void)onClickTipsBtn:(id)btn Index:(int)index;
-(void)viewWillPush:(BOOL)view;
-(void)viewWillPresent:(BOOL)view;
-(void)viewWillBePoped:(BOOL)view;
-(void)willShow;
-(void)viewWillDisappear:(BOOL)view;
-(void)willAppear;
-(void)viewDidLoad;
-(void)toggleSetting:(id)setting;
-(void)toggleBottle;
-(void)toggleFish;
-(void)toggleThrow;
-(void)showGuideToNearbyTipView:(id)nearbyTipView;
-(void)dealloc;
-(id)init;
-(void)undoSandyAnimation:(BOOL)animation;
-(void)doSandyAnimation;
-(void)showWarningTipViewNoConfirm:(id)confirm;
-(void)showWarningTipView:(id)view;
-(void)updateBottleCountLabel;
-(void)updateFishCountLabel;
-(void)updateThrowCountLabel;
-(void)removeViewSlipToLeft:(BOOL)left;
-(void)addViewSlipToLeft:(BOOL)left;
-(void)hideTopBar;
-(void)initButtonView;
-(id)cropImage:(id)image toFitSize:(CGSize)fitSize;
-(void)viewDidTransitionToNewSize;
-(void)initBgView;
-(void)initData;
-(id)NavigationController;
-(void)enableTouch;
-(void)disableTouch;
-(void)unSpotLightCanvasAnimated:(BOOL)animated;
-(void)spotLightCanvasAnimated:(BOOL)animated;
-(void)unDarkenCanvasAnimated:(BOOL)animated;
-(void)darkenCanvasAnimated:(BOOL)animated;
-(unsigned long)canvasHeightForDraw;
-(void)showCanvasTopBarAnimated:(BOOL)animated;
-(void)showCanvasBottomBarAnimated:(BOOL)animated;
-(void)hideCanvasBottomBarAnimated:(BOOL)animated;
-(void)hideCanvasTopBarAnimated:(BOOL)animated;
-(void)touchesCancelled_ScrollView:(id)view withEvent:(id)event;
-(void)touchesEnded_ScrollView:(id)view withEvent:(id)event;
-(void)touchesMoved_ScrollView:(id)view withEvent:(id)event;
-(void)touchesBegan_ScrollView:(id)view withEvent:(id)event;
-(void)BottleTotalUnreadCountChanged;
-(void)OnEndLoadBottleContact;
-(void)OnBeginLoadBottleContact;
-(void)StartShowSyncAllContactLoadingView;
-(void)OnFishNumChanged:(unsigned long)changed;
-(void)OnThrowNumChanged:(unsigned long)changed;
-(void)OnBottleBan:(unsigned long)ban FishNetNum:(unsigned long)num;
-(void)OnGetCountFail;
-(void)OnGetCountOK:(unsigned long)ok FishNetNum:(unsigned long)num;
@end
