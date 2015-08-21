/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIControl.h>

@class UIButton;

@interface PTHNavBarPageControl : UIControl {

	unsigned long long _currentPage;
	unsigned long long _pageCount;
	UIButton* _upButton;
	UIButton* _downButton;

}

@property (assign,nonatomic) unsigned long long currentPage;              //@synthesize currentPage=_currentPage - In the implementation block
@property (assign,nonatomic) unsigned long long pageCount;                //@synthesize pageCount=_pageCount - In the implementation block
-(void)_previous;
-(void)_next;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_update;
-(unsigned long long)pageCount;
-(void)setCurrentPage:(unsigned long long)arg1 ;
-(unsigned long long)currentPage;
-(void)setPageCount:(unsigned long long)arg1 ;
@end

