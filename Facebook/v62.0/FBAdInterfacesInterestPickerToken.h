/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAdInterfacesPickerToken.h>

@class FBAdInterfacesTargetingInterest, NSString, UIImage;

@interface FBAdInterfacesInterestPickerToken : NSObject <FBAdInterfacesPickerToken> {

	FBAdInterfacesTargetingInterest* _interest;

}

@property (nonatomic,copy,readonly) NSString * tokenText; 
@property (nonatomic,readonly) UIImage * tokenImage; 
@property (nonatomic,readonly) UIImage * tokenImageSelected; 
@property (nonatomic,readonly) FBAdInterfacesTargetingInterest * interest;              //@synthesize interest=_interest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tokenObject;
-(id)tokenObjectIdentifier;
-(NSString *)tokenText;
-(UIImage *)tokenImage;
-(UIImage *)tokenImageSelected;
-(id)initWithInterest:(id)arg1 ;
-(FBAdInterfacesTargetingInterest *)interest;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
