/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface ECAPIStat : NSObject {

	NSString* _adId;
	NSString* _canonicalType;
	NSString* _localizedType;
	NSString* _canonicalValue;
	NSString* _localizedValue;
	NSString* _message;

}

@property (nonatomic,retain) NSString * adId;                        //@synthesize adId=_adId - In the implementation block
@property (nonatomic,retain) NSString * canonicalType;               //@synthesize canonicalType=_canonicalType - In the implementation block
@property (nonatomic,retain) NSString * localizedType;               //@synthesize localizedType=_localizedType - In the implementation block
@property (nonatomic,retain) NSString * canonicalValue;              //@synthesize canonicalValue=_canonicalValue - In the implementation block
@property (nonatomic,retain) NSString * localizedValue;              //@synthesize localizedValue=_localizedValue - In the implementation block
@property (nonatomic,retain) NSString * message;                     //@synthesize message=_message - In the implementation block
-(NSString *)canonicalValue;
-(void)setCanonicalValue:(NSString *)arg1 ;
-(NSString *)localizedValue;
-(void)setLocalizedValue:(NSString *)arg1 ;
-(NSString *)canonicalType;
-(NSString *)localizedType;
-(NSString *)adId;
-(void)setAdId:(NSString *)arg1 ;
-(void)setCanonicalType:(NSString *)arg1 ;
-(void)setLocalizedType:(NSString *)arg1 ;
-(id)description;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
@end

