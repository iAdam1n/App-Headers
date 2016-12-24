/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:25:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FB69C75F-331C-4C56-9EB7-0BF6B9A7830F/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECBingRequest.h>

@class NSString;

@interface ECBingBannerSetImpressionFeedbackRequest : ECBingRequest {

	NSString* _feedbackParams;

}

@property (nonatomic,retain) NSString * feedbackParams;              //@synthesize feedbackParams=_feedbackParams - In the implementation block
-(id)generateFeedbackPostBodyWithShownAds:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 impressionedBanners:(id)arg2 feedbackParams:(id)arg3 ;
-(NSString *)feedbackParams;
-(void)setFeedbackParams:(NSString *)arg1 ;
-(id)URLString;
@end
