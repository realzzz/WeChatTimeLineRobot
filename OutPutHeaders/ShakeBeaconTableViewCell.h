/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMTableViewCell.h"

@class MMWebImageView, UILabel;

@interface ShakeBeaconTableViewCell : MMTableViewCell {
	MMWebImageView* _coverImageView;
	UILabel* _titleLabel;
	UILabel* _contentLabel;
}
@property(retain, nonatomic) UILabel* contentLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) MMWebImageView* coverImageView;
-(void).cxx_destruct;
-(void)updateWithShakeBeaconItem:(id)shakeBeaconItem;
@end

