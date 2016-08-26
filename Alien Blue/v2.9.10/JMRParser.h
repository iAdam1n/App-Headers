/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, HTMLNode, NSMutableArray;

@interface JMRParser : NSObject {

	NSString* _summaryContent;
	NSString* _htmlStr;
	HTMLNode* _body;
	NSMutableArray* _detachedNodes;

}

@property (readonly) NSString * summaryContent;                 //@synthesize summaryContent=_summaryContent - In the implementation block
@property (retain) NSString * htmlStr;                          //@synthesize htmlStr=_htmlStr - In the implementation block
@property (retain) HTMLNode * body;                             //@synthesize body=_body - In the implementation block
@property (retain) NSMutableArray * detachedNodes;              //@synthesize detachedNodes=_detachedNodes - In the implementation block
-(void)parseOnComplete:(/*^block*/id)arg1 ;
-(void)setHtmlStr:(NSString *)arg1 ;
-(void)setDetachedNodes:(NSMutableArray *)arg1 ;
-(NSString *)htmlStr;
-(void)prepDocument;
-(id)grabArticleNodes;
-(id)generateArticleHTMLWithNodes:(id)arg1 ;
-(NSMutableArray *)detachedNodes;
-(void)removeNodesWithTag:(id)arg1 ;
-(void)removeCandidatesFromNodeArray:(id)arg1 regExPattern:(id)arg2 searchType:(int)arg3 ;
-(NSString *)summaryContent;
-(HTMLNode *)body;
-(void)setBody:(HTMLNode *)arg1 ;
-(id)initWithHTML:(id)arg1 ;
@end
