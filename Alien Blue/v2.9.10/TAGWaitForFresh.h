/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/TAGContainerCallback.h>

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

