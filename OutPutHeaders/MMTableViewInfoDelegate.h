/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UIScrollViewDelegate.h"
#import "tableViewDelegate.h"
#import "NSObject.h"


@protocol MMTableViewInfoDelegate <NSObject, UIScrollViewDelegate, tableViewDelegate>
@optional
-(void)commitEditingForRowAtIndexPath:(id)indexPath Cell:(id)cell;
-(void)accessoryButtonTappedForRowWithIndexPath:(id)indexPath Cell:(id)cell;
@end

