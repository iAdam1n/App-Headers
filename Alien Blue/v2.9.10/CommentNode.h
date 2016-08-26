/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/BaseStyledTextNode.h>

@class Comment, Post;

@interface CommentNode : BaseStyledTextNode {

	BOOL _firstComment;
	BOOL _isContext;
	Comment* _comment;
	Post* _post;

}

@property (retain) Comment * comment;              //@synthesize comment=_comment - In the implementation block
@property (retain) Post * post;                    //@synthesize post=_post - In the implementation block
@property (assign) BOOL firstComment;              //@synthesize firstComment=_firstComment - In the implementation block
@property (assign) BOOL isContext;                 //@synthesize isContext=_isContext - In the implementation block
+(id)nodeForComment:(id)arg1 level:(unsigned long long)arg2 ;
+(Class)cellClass;
-(void)setPost:(Post *)arg1 ;
-(Post *)post;
-(id)styledText;
-(double)heightForBodyConstrainedToWidth:(double)arg1 ;
-(id)initWithComment:(id)arg1 level:(unsigned long long)arg2 ;
-(void)setIsContext:(BOOL)arg1 ;
-(id)thumbLinks;
-(BOOL)containsRestrictedContent;
-(void)setFirstComment:(BOOL)arg1 ;
-(BOOL)containsNSFWContent;
-(void)prefetchThumbnails;
-(BOOL)firstComment;
-(BOOL)isContext;
-(Comment *)comment;
-(id)elementId;
-(void)setComment:(Comment *)arg1 ;
@end
