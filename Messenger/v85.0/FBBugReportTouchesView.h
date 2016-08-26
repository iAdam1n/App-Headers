/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBBugReportTouchLayerDelegate.h>
#import <Messenger/FBShakeWindowEventListener.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface FBBugReportTouchesView : UIView <FBBugReportTouchLayerDelegate, FBShakeWindowEventListener> {

	NSMutableDictionary* _touchesActive;
	NSMutableArray* _touchesReusePool;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)bugReportTouchLayerWillDisappear:(id)arg1 ;
-(void)bugReportTouchLayerDidDisappear:(id)arg1 ;
-(void)_clearAllTouches;
-(id)_newTouchLayer:(id)arg1 ;
-(void)shakeWindow:(id)arg1 didReceiveEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
@end
