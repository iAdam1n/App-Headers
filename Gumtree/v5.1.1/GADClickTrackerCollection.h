/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GADClickTrackerDelegate.h>

@class NSMutableSet, NSString;

@interface GADClickTrackerCollection : NSObject <GADClickTrackerDelegate> {

	NSMutableSet* _trackers;

}

@property (nonatomic,retain) NSMutableSet * trackers;               //@synthesize trackers=_trackers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)trackMediationURLsFromTemplates:(id)arg1 defaultTemplate:(id)arg2 networkID:(id)arg3 allocationID:(id)arg4 qData:(id)arg5 appKey:(id)arg6 refresh:(BOOL)arg7 durations:(id)arg8 exitCodes:(id)arg9 fillStatus:(id)arg10 ;
-(NSMutableSet *)trackers;
-(void)setTrackers:(NSMutableSet *)arg1 ;
-(void)tracker:(id)arg1 didRedirect:(id)arg2 ;
-(void)tracker:(id)arg1 didFailWithError:(id)arg2 ;
-(void)trackURL:(id)arg1 ;
-(void)trackURL:(id)arg1 cacheEnabled:(BOOL)arg2 ;
-(void)cleanupTrackers;
-(void)trackURLs:(id)arg1 cacheEnabled:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
@end

