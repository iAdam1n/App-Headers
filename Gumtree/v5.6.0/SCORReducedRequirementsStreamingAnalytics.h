/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:25:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FB69C75F-331C-4C56-9EB7-0BF6B9A7830F/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@interface SCORReducedRequirementsStreamingAnalytics : NSObject {

	ReducedRequirementsStreamingAnalytics* _rrStreamingAnalytics;

}

@property (assign,nonatomic) ReducedRequirementsStreamingAnalytics* rrStreamingAnalytics;              //@synthesize rrStreamingAnalytics=_rrStreamingAnalytics - In the implementation block
-(ReducedRequirementsStreamingAnalytics*)rrStreamingAnalytics;
-(void)playVideoAdvertisementWithMetadata:(id)arg1 andMediaType:(long long)arg2 ;
-(void)playAudioAdvertisementWithMetadata:(id)arg1 andMediaType:(long long)arg2 ;
-(void)playVideoContentPartWithMetadata:(id)arg1 andMediaType:(long long)arg2 ;
-(void)playAudioContentPartWithMetadata:(id)arg1 andMediaType:(long long)arg2 ;
-(void)setRrStreamingAnalytics:(ReducedRequirementsStreamingAnalytics*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stop;
@end
