/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotStatusCursorController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class PTHTweetbotAccount, UILongPressGestureRecognizer, PTHTweetbotHomeTimelineListPickerController, PTHTweetbotList, NSString;

@interface PTHTweetbotHomeTimelineController : PTHTweetbotStatusCursorController <UIGestureRecognizerDelegate> {

	PTHTweetbotAccount* _account;
	UILongPressGestureRecognizer* _listPickerRecognizer;
	PTHTweetbotHomeTimelineListPickerController* _listPicker;
	PTHTweetbotList* _list;

}

@property (nonatomic,retain) PTHTweetbotList * list;                //@synthesize list=_list - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)nothingFoundTitle;
-(void)_updateUnreadTab;
-(void)cursorDidUpdate;
-(void)lastReadTIDDidUpdate;
-(void)showListPicker;
-(void)_pickList:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(PTHTweetbotList *)list;
-(id)searchTitle;
-(void)setList:(PTHTweetbotList *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end
