/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/PSCoding.h>

@class NSString;

@interface TGDownloadDocumentUrl : NSObject <PSCoding> {

	NSString* _giphyId;
	NSString* _documentUrl;

}

@property (nonatomic,readonly) NSString * giphyId;                  //@synthesize giphyId=_giphyId - In the implementation block
@property (nonatomic,readonly) NSString * documentUrl;              //@synthesize documentUrl=_documentUrl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithKeyValueCoder:(id)arg1 ;
-(void)encodeWithKeyValueCoder:(id)arg1 ;
-(id)initWithGiphyId:(id)arg1 documentUrl:(id)arg2 ;
-(NSString *)giphyId;
-(NSString *)documentUrl;
@end
