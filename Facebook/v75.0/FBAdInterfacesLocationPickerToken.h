/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAdInterfacesPickerToken.h>

@class FBAdInterfacesTargetingLocation, NSString, UIImage;

@interface FBAdInterfacesLocationPickerToken : NSObject <FBAdInterfacesPickerToken> {

	FBAdInterfacesTargetingLocation* _location;

}

@property (nonatomic,copy,readonly) NSString * tokenText; 
@property (nonatomic,readonly) UIImage * tokenImage; 
@property (nonatomic,readonly) UIImage * tokenImageSelected; 
@property (nonatomic,readonly) FBAdInterfacesTargetingLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) id tokenObject; 
@property (nonatomic,copy,readonly) NSString * tokenObjectIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tokenObject;
-(NSString *)tokenObjectIdentifier;
-(NSString *)tokenText;
-(UIImage *)tokenImage;
-(UIImage *)tokenImageSelected;
-(id)initWithTargetingLocation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(FBAdInterfacesTargetingLocation *)location;
@end
