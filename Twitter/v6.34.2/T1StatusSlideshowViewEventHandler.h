/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1StatusViewEventHandler.h>

@class T1SlideshowViewController, T1SlideshowStatusView, NSString;

@interface T1StatusSlideshowViewEventHandler : NSObject <T1StatusViewEventHandler> {

	T1SlideshowViewController* _controller;
	T1SlideshowStatusView* _slideshowStatusView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleStatusViewEvent:(id)arg1 ;
-(void)_handleAvatarTapEvent:(id)arg1 withController:(id)arg2 slideshowStatusView:(id)arg3 ;
-(void)_scribeAction:(id)arg1 element:(id)arg2 status:(id)arg3 controller:(id)arg4 ;
-(id)initWithController:(id)arg1 slideshowStatusView:(id)arg2 ;
@end

