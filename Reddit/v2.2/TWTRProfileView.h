/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class TWTRTweetViewMetrics;

@interface TWTRProfileView : UIImageView {

	TWTRTweetViewMetrics* _metrics;

}

@property (nonatomic,retain) TWTRTweetViewMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
-(id)init;
-(TWTRTweetViewMetrics *)metrics;
-(void)setMetrics:(TWTRTweetViewMetrics *)arg1 ;
@end
