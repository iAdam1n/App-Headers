/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSData, NSSet;


@protocol WAMediaUploadable <NSObject>
@property (nonatomic,readonly) id<NSObject><NSCopying> uniqueID; 
@property (nonatomic,copy,readonly) NSString * stanzaID; 
@property (nonatomic,copy,readonly) NSString * toJID; 
@property (nonatomic,copy,readonly) NSString * mediaUploadPath; 
@property (nonatomic,readonly) int mediaType; 
@property (nonatomic,readonly) int mediaOrigin; 
@property (nonatomic,copy,readonly) NSString * fileHash; 
@property (nonatomic,readonly) BOOL isPTT; 
@property (nonatomic,readonly) long long httpRetryCount; 
@property (nonatomic,copy,readonly) NSString * mediaCollectionName; 
@property (nonatomic,copy,readonly) NSData * mediaKey; 
@property (nonatomic,copy,readonly) NSSet * recipientsJids; 
@optional
-(void)setMediaMimeType:(id)arg1 newMediaPath:(id)arg2;
-(void)setMediaMimeType:(id)arg1 linkMediaToMediaInUploadable:(id)arg2;

@required
-(NSString *)stanzaID;
-(NSString *)mediaCollectionName;
-(int)mediaOrigin;
-(NSString *)toJID;
-(BOOL)isPTT;
-(long long)httpRetryCount;
-(NSString *)mediaUploadPath;
-(NSSet *)recipientsJids;
-(id<NSObject><NSCopying>)uniqueID;
-(NSString *)fileHash;
-(int)mediaType;
-(NSData *)mediaKey;

@end
