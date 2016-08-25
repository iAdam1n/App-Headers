/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol GAITracker;
@class NSString;

@interface GAITrackedViewController : UIViewController {

	id<GAITracker> _tracker;
	NSString* _screenName;

}

@property (assign,nonatomic) id<GAITracker> tracker;              //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,copy) NSString * screenName;                 //@synthesize screenName=_screenName - In the implementation block
-(id<GAITracker>)tracker;
-(void)setTracker:(id<GAITracker>)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)screenName;
-(void)setScreenName:(NSString *)arg1 ;
@end

