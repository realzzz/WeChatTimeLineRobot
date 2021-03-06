/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "MMPickerViewDelegate.h"
#import "WeChat-Structs.h"
#import "MMImagePickerManagerDelegate.h"
#import "MessageObserverDelegate.h"
#import "settingModifySignDelegate.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "MMRegionPickerViewControllerDelegate.h"

@class MMLoadingView, NSString, MMTableView, MMPickerView, MMHeadImageView, CUsrInfo;
@protocol EditBottleProfileDelegate;

@interface BottleProfileEditViewController : MMUIViewController <MessageObserverDelegate, MMPickerViewDelegate, settingModifySignDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, MMRegionPickerViewControllerDelegate, MMImagePickerManagerDelegate> {
	MMTableView* m_tableView;
	CUsrInfo* m_oUsrInfo;
	MMHeadImageView* m_headImage;
	MMPickerView* m_pickerView;
	unsigned long m_curPickerMode;
	MMLoadingView* m_loadingView;
	unsigned long m_uiUploadHeadEventID;
	BOOL m_bIsFirstIn;
	id<EditBottleProfileDelegate> m_delegate;
	map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > m_map;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_bIsFirstIn;
@property(assign, nonatomic) __weak id<EditBottleProfileDelegate> m_delegate;
@property(retain, nonatomic) CUsrInfo* m_oUsrInfo;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)MessageReturn:(unsigned long)aReturn MessageInfo:(id)info Event:(unsigned long)event;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)showModifySignView;
-(void)saveNewSign:(id)sign;
-(void)showModifyAddressView;
-(void)showModifySexView:(id)view;
-(void)MMPickerViewDidChooseRowTitle:(id)mmpickerView atSessionTitle:(id)sessionTitle;
-(void)MMRegionPickerDidChoosRegion:(id)mmregionPicker;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)showChangeImg;
-(void)showImagePicker:(int)picker;
-(void)MMImagePickerManagerDidCancel:(id)mmimagePickerManager;
-(void)MMImagePickerManager:(id)manager didFinishPickingImageWithInfo:(id)info;
-(id)getViewController;
-(void)handleImage:(id)image;
-(void)initLoadingView;
-(void)stopLoadingAndShowOK:(id)ok;
-(void)stopLoadingAndShowError:(id)error;
-(void)stopLoading;
-(void)startLoading;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)makeSetDetailProfileCell:(id)cell row:(int)row;
-(void)makeSetSignatureCell:(id)cell;
-(int)getLinesForSignature:(id)signature;
-(void)makeSetAddressCell:(id)cell;
-(void)makeSetSexCell:(id)cell;
-(void)makeSetHeadImageCell:(id)cell;
-(void)updateHead:(id)head;
-(id)getSettingHeadImage;
-(void)makeCellInfoInternal:(id)internal col:(id)col value:(id)value mustFill:(BOOL)fill;
-(id)makeMustFillLabel;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)dealloc;
-(void)viewDidLoad;
-(void)initData;
-(void)initView;
-(id)init;
-(void)OnSave;
-(void)goToSandyBeach;
-(void)OnReturn;
-(void)OnPop;
@end

