/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:17 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSURL, NSString;

@interface ECDeepLinkObject : NSObject {

	NSURL* _link;
	NSString* _sourceApp;
	id _annotation;

}

@property (nonatomic,retain) NSURL * link;                      //@synthesize link=_link - In the implementation block
@property (nonatomic,retain) NSString * sourceApp;              //@synthesize sourceApp=_sourceApp - In the implementation block
@property (nonatomic,retain) id annotation;                     //@synthesize annotation=_annotation - In the implementation block
-(NSString *)sourceApp;
-(void)setSourceApp:(NSString *)arg1 ;
-(id)annotation;
-(void)setAnnotation:(id)arg1 ;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
@end

