/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterMomentCapsuleFetcher.h>

@protocol TFNTwitterMomentCapsuleFetcher;
@class NSString;

@interface TFNTwitterDelayedMomentCapsuleFetcher : NSObject <TFNTwitterMomentCapsuleFetcher> {

	BOOL _fetching;
	double _delay;
	id<TFNTwitterMomentCapsuleFetcher> _capsuleFetcher;

}

@property (assign,nonatomic) double delay;                                                   //@synthesize delay=_delay - In the implementation block
@property (nonatomic,retain) id<TFNTwitterMomentCapsuleFetcher> capsuleFetcher;              //@synthesize capsuleFetcher=_capsuleFetcher - In the implementation block
@property (assign,getter=isFetching,nonatomic) BOOL fetching;                                //@synthesize fetching=_fetching - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TFNTwitterMomentCapsuleFetcher>)capsuleFetcher;
-(void)fetchMomentCapsuleWithResponseBlock:(/*^block*/id)arg1 ;
-(void)setCapsuleFetcher:(id<TFNTwitterMomentCapsuleFetcher>)arg1 ;
-(id)initWithMomentCapsuleFetcher:(id)arg1 ;
-(void)setDelay:(double)arg1 ;
-(double)delay;
-(void)setFetching:(BOOL)arg1 ;
-(BOOL)isFetching;
@end

