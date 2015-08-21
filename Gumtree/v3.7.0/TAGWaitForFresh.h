/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/TAGContainerCallback.h>

@class TAGContainerOpener, NSString;

@interface TAGWaitForFresh : NSObject <TAGContainerCallback> {

	double _oldestTimeToBeFresh;
	TAGContainerOpener* _containerOpener;

}

@property (assign) double oldestTimeToBeFresh;                        //@synthesize oldestTimeToBeFresh=_oldestTimeToBeFresh - In the implementation block
@property (retain) TAGContainerOpener * containerOpener;              //@synthesize containerOpener=_containerOpener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)containerRefreshBegin:(id)arg1 refreshType:(int)arg2 ;
-(void)containerRefreshSuccess:(id)arg1 refreshType:(int)arg2 ;
-(void)containerRefreshFailure:(id)arg1 failure:(int)arg2 refreshType:(int)arg3 ;
-(TAGContainerOpener *)containerOpener;
-(void)setContainerOpener:(TAGContainerOpener *)arg1 ;
-(BOOL)isFresh;
-(double)oldestTimeToBeFresh;
-(id)initWithContainerOpener:(id)arg1 oldestTimeToBeFresh:(double)arg2 ;
-(void)setOldestTimeToBeFresh:(double)arg1 ;
@end
