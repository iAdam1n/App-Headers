/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCommentStreamDimmable.h>
#import <Facebook/FBCommentStreamDisabling.h>
#import <Facebook/FBCommentStreamReloadableProtocol.h>

@class NSDate, FBCommentStreamSourceAggregator, NSDictionary, NSString;

@interface FBCommentStreamTimerangeAggregator : NSObject <FBCommentStreamDimmable, FBCommentStreamDisabling, FBCommentStreamReloadableProtocol> {

	NSDate* _referenceDate;
	FBCommentStreamSourceAggregator* _sourceAggregator;
	NSDictionary* _bucketStartTimestampToTimerangeBucket;
	BOOL _disabled;
	BOOL _dimmed;

}

@property (nonatomic,readonly) id<FBCommentStreamChildSource> source;              //@synthesize sourceAggregator=_sourceAggregator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL dimmed;                                          //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                        //@synthesize disabled=_disabled - In the implementation block
-(void)reloadSources;
-(void)insertCommentWithRepliesManager:(id)arg1 ;
-(void)removeCommentWithRepliesManager:(id)arg1 ;
-(id)_bucketForComment:(id)arg1 ;
-(id)_createBucketForComment:(id)arg1 ;
-(long long)_indexForBucket:(id)arg1 ;
-(id)init;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(id<FBCommentStreamChildSource>)source;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
@end
