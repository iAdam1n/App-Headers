/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBCommentReplyPreviewConfiguration : NSObject <NSCopying> {

	BOOL _showInterestingReply;
	BOOL _loadFullReplyPreviews;
	unsigned long long _mostRecentFetchCount;

}

@property (nonatomic,readonly) unsigned long long mostRecentFetchCount;              //@synthesize mostRecentFetchCount=_mostRecentFetchCount - In the implementation block
@property (nonatomic,readonly) BOOL showInterestingReply;                            //@synthesize showInterestingReply=_showInterestingReply - In the implementation block
@property (nonatomic,readonly) BOOL loadFullReplyPreviews;                           //@synthesize loadFullReplyPreviews=_loadFullReplyPreviews - In the implementation block
+(id)configurationWithCommentOrdering:(unsigned long long)arg1 loadFullReplyPreviews:(BOOL)arg2 fullReplyPreviewFetchCount:(unsigned long long)arg3 ;
+(id)configurationWithMostRecentFetchCount:(unsigned long long)arg1 showInterestingReply:(BOOL)arg2 loadFullReplyPreviews:(BOOL)arg3 ;
-(unsigned long long)mostRecentFetchCount;
-(BOOL)showInterestingReply;
-(BOOL)loadFullReplyPreviews;
-(id)initWithMostRecentFetchCount:(unsigned long long)arg1 showInterestingReply:(BOOL)arg2 loadFullReplyPreviews:(BOOL)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
