/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIView.h"

@class NSMutableArray, NSString, UIImageView, UILabel;

@interface MMStringToastView : MMUIView {
	BOOL m_animationDone;
	NSString* m_currentString;
	NSMutableArray* m_remainStringList;
	UILabel* m_currentLabel;
	UILabel* m_nextLabel;
	UIImageView* m_backgroundImageView;
	NSMutableArray* m_remainTimeList;
}
@property(assign, nonatomic) BOOL m_animationDone;
@property(retain, nonatomic) UIImageView* m_backgroundImageView;
@property(retain, nonatomic) UILabel* m_nextLabel;
@property(retain, nonatomic) UILabel* m_currentLabel;
@property(retain, nonatomic) NSMutableArray* m_remainTimeList;
@property(retain, nonatomic) NSMutableArray* m_remainStringList;
@property(retain, nonatomic) NSString* m_currentString;
-(void).cxx_destruct;
-(CGRect)getStringRect:(id)rect WithWidth:(float)width WithHeight:(float)height;
-(void)timerFunction;
-(void)clearCurrentString;
-(void)addScrollingString:(id)string withDisplayTime:(float)displayTime;
-(void)addScrollingString:(id)string;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end
