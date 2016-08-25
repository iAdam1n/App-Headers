/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/ALAdVideoPlaybackDelegate.h>

@protocol ALAdVideoPlaybackDelegate;
@class NSString;

@interface ALAdVideoPlaybackProxy : NSObject <ALAdVideoPlaybackDelegate> {

	id<ALAdVideoPlaybackDelegate> delegate;

}

@property (nonatomic,retain) id<ALAdVideoPlaybackDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)videoPlaybackBeganInAd:(id)arg1 ;
-(void)videoPlaybackEndedInAd:(id)arg1 atPlaybackPercent:(id)arg2 fullyWatched:(BOOL)arg3 ;
-(id)initWithVideoPlaybackDelegate:(id)arg1 ;
-(void)setDelegate:(id<ALAdVideoPlaybackDelegate>)arg1 ;
-(id<ALAdVideoPlaybackDelegate>)delegate;
@end

