/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <UIKit/UINavigationBar.h>

@class BaseView;

@interface BaseNavigationBar : UINavigationBar {

	BaseView* _bottomLine;

}

@property (nonatomic,retain) BaseView * bottomLine;              //@synthesize bottomLine=_bottomLine - In the implementation block
-(BaseView *)bottomLine;
-(void)setBottomLine:(BaseView *)arg1 ;
-(void)setCurrentBarStyle:(id)arg1 ;
-(void)setCurrentAlpha:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)dealloc;
-(void)didMoveToSuperview;
@end
