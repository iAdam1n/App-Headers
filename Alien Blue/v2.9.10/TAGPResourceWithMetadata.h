/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/TAGPBGeneratedMessage.h>

@class TAGPResource, TAGPSupplementedResource;

@interface TAGPResourceWithMetadata : TAGPBGeneratedMessage

@property (assign,nonatomic) BOOL hasTimeStamp; 
@property (assign,nonatomic) long long timeStamp; 
@property (assign,nonatomic) BOOL hasResource; 
@property (nonatomic,retain) TAGPResource * resource; 
@property (assign,nonatomic) BOOL hasSupplementedResource; 
@property (nonatomic,retain) TAGPSupplementedResource * supplementedResource; 
+(id)descriptor;
@end

