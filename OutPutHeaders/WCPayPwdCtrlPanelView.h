/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "ILinkEventExt.h"

@class UIImageView, UILabel, WCPayTenpayPasswordCtrlItem, RichTextView, UIView, NSString;

@interface WCPayPwdCtrlPanelView : XXUnknownSuperclass <ILinkEventExt> {
	UIImageView* m_footerTipImageView;
	UILabel* m_footerTip;
	UIView* m_footerView;
	WCPayTenpayPasswordCtrlItem* m_textField;
	RichTextView* tip;
	float _contentViewY;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) float contentViewY;
@property(retain, nonatomic) WCPayTenpayPasswordCtrlItem* m_textField;
-(void).cxx_destruct;
-(void)onLinkClicked:(id)clicked withRect:(CGRect)rect;
-(void)dealloc;
-(void)setFooterView:(id)view;
-(void)setError:(id)error;
-(void)layoutSubviews;
-(id)initWithTip:(id)tip;
@end

