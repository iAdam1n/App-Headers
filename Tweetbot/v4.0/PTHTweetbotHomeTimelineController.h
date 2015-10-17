/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(id)searchTitle;
-(id)nothingFoundTitle;
-(void)_updateUnreadTab;
-(void)showListPicker;
-(void)_pickList:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setList:(PTHTweetbotList *)arg1 ;
-(PTHTweetbotList *)list;
-(id)initWithAccount:(id)arg1 ;
@end
