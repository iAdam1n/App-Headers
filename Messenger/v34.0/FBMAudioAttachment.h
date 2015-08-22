/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMAttachment.h>
#import <Messenger/OutgoingAttachment.h>

@class NSURL, NSString, NSData, NSDictionary;

@interface FBMAudioAttachment : FBMAttachment <OutgoingAttachment> {

	NSURL* _location;
	double _duration;
	NSString* _fileExtension;
	NSString* _fileMimeType;
	NSData* _attachmentData;
	double _timestamp;

}

@property (nonatomic,retain) NSURL * location;                                    //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSString * attachmentFilename; 
@property (nonatomic,copy) NSString * fileExtension;                              //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,copy) NSString * fileMimeType;                               //@synthesize fileMimeType=_fileMimeType - In the implementation block
@property (nonatomic,retain) NSData * attachmentData;                             //@synthesize attachmentData=_attachmentData - In the implementation block
@property (assign,nonatomic) double timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long attachmentType; 
@property (nonatomic,copy,readonly) NSDictionary * extraLoggingData; 
-(id)attachmentHandle;
-(void)getThumbnailOfSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)addAsParamsToDictionary:(id)arg1 ;
-(void)addAsParamsToRequest:(id)arg1 ;
-(void)addAsAttachFile:(id)arg1 ;
-(void)prepareAttachmentDataWithCompletedBlock:(/*^block*/id)arg1 ;
-(void)prepareAttachmentHashWithCompleteBlock:(/*^block*/id)arg1 ;
-(BOOL)canCancelPrepareAttachmentData;
-(void)cancelPrepareAttachmentData;
-(void)setFileMimeType:(NSString *)arg1 ;
-(double)loadFromFilename;
-(NSString *)fileMimeType;
-(id)init;
-(NSString *)description;
-(double)timestamp;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSURL *)location;
-(id)mimeType;
-(NSString *)attachmentFilename;
-(void)setLocation:(NSURL *)arg1 ;
-(NSString *)fileExtension;
-(void)setFileExtension:(NSString *)arg1 ;
-(NSData *)attachmentData;
-(void)setAttachmentData:(NSData *)arg1 ;
-(unsigned long long)attachmentType;
@end
