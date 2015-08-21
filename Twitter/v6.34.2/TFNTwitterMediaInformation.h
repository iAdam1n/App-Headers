/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/NSCoding.h>
#import <Twitter/TFNPlistSerialization.h>
#import <Twitter/TFSTwitterModel.h>

@class NSString, TFNTwitterMediaImageInformation, NSDate;

@interface TFNTwitterMediaInformation : NSObject <NSCoding, TFNPlistSerialization, TFSTwitterModel> {

	NSString* _mediaID;
	long long _mediaType;
	unsigned long long _size;
	TFNTwitterMediaImageInformation* _imageInformation;
	NSDate* _expiryDate;
	NSDate* _lastModifiedDate;

}

@property (nonatomic,copy) NSString * mediaID;                                                //@synthesize mediaID=_mediaID - In the implementation block
@property (assign,nonatomic) long long mediaType;                                             //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) unsigned long long size;                                         //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) TFNTwitterMediaImageInformation * imageInformation;              //@synthesize imageInformation=_imageInformation - In the implementation block
@property (nonatomic,retain) NSDate * expiryDate;                                             //@synthesize expiryDate=_expiryDate - In the implementation block
@property (nonatomic,retain) NSDate * lastModifiedDate;                                       //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mediaInformationWithJSONData:(id)arg1 error:(id*)arg2 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)plistDictionaryValue;
-(id)initWithPlistDictionary:(id)arg1 ;
-(NSString *)mediaID;
-(void)setMediaID:(NSString *)arg1 ;
-(TFNTwitterMediaImageInformation *)imageInformation;
-(void)setImageInformation:(TFNTwitterMediaImageInformation *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(unsigned long long)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(long long)mediaType;
-(void)setMediaType:(long long)arg1 ;
-(NSDate *)lastModifiedDate;
@end

