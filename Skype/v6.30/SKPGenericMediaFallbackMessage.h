/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPMessage.h>

@class SKPMediaDocument, NSString, NSURL, UIImage;

@interface SKPGenericMediaFallbackMessage : SKPMessage {

	BOOL _didLoadDocument;
	SKPMediaDocument* _mediaDocument;

}

@property (nonatomic,retain) SKPMediaDocument * mediaDocument;               //@synthesize mediaDocument=_mediaDocument - In the implementation block
@property (assign,nonatomic) BOOL didLoadDocument;                           //@synthesize didLoadDocument=_didLoadDocument - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * bodyText; 
@property (nonatomic,readonly) NSURL * thumbnailURL; 
@property (nonatomic,readonly) unsigned long long trustType; 
@property (nonatomic,readonly) UIImage * thumbnailImage; 
@property (nonatomic,readonly) NSURL * webURL; 
@property (nonatomic,readonly) unsigned long long documentType; 
+(id)keyPathsForValuesAffectingTrustType;
+(id)keyPathsForValuesAffectingThumbnailImage;
+(id)keyPathsForValuesAffectingThumbnailURL;
+(id)keyPathsForValuesAffectingBodyText;
+(id)keyPathsForValuesAffectingWebURL;
+(id)keyPathsForValuesAffectingDocumentType;
+(id)keyPathsForValuesAffectingTitle;
-(SKPMediaDocument *)mediaDocument;
-(void)willSetValue:(id)arg1 forKey:(id)arg2 andUseMainQueueToSet:(BOOL)arg3 ;
-(id)attributedSummary;
-(id)otherPropertyKeysToIncludeInDebugDescription;
-(BOOL)didLoadDocument;
-(void)setDidLoadDocument:(BOOL)arg1 ;
-(unsigned long long)trustType;
-(void)setMediaDocument:(SKPMediaDocument *)arg1 ;
-(NSString *)title;
-(long long)type;
-(unsigned long long)documentType;
-(NSString *)bodyText;
-(NSURL *)webURL;
-(NSURL *)thumbnailURL;
-(UIImage *)thumbnailImage;
@end
