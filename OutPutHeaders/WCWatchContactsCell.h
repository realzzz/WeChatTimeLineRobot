/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WCWatchChatRoomImageView, UITextView, CContact, UIImageView, UILabel;

@interface WCWatchContactsCell : XXUnknownSuperclass {
	UIImageView* _avatarImageView;
	WCWatchChatRoomImageView* _chatRoomImageView;
	UILabel* _nameLabel;
	UITextView* _messageText;
	float _tableViewWidth;
	CContact* _contact;
}
@property(retain, nonatomic) CContact* contact;
-(void).cxx_destruct;
-(id)makeTextSession:(id)session;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)initUI;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier tableViewWidth:(float)width;
@end

