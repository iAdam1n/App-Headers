/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol FBURLRequestDefiningWithHostPathParams <FBURLRequestDefining>
@property (nonatomic,copy,readonly) NSString * host; 
@property (nonatomic,copy,readonly) NSString * relativePath; 
@property (nonatomic,copy,readonly) NSDictionary * parameters; 
@property (nonatomic,copy,readonly) NSString * methodForSignature; 
@required
-(BOOL)useMultipartForm;
-(NSString *)methodForSignature;
-(unsigned long long)compressionMethod;
-(NSString *)host;
-(NSDictionary *)parameters;
-(NSString *)relativePath;

@end
