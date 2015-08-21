/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
