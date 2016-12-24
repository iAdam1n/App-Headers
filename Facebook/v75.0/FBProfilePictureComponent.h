/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@protocol FBProfilePictureComponentToolbox;
@class FBMemPerson;

@interface FBProfilePictureComponent : CKCompositeComponent {

	FBMemPerson* _person;
	id<FBProfilePictureComponentToolbox> _toolbox;

}
+(id)newWithPerson:(id)arg1 profilePictureSize:(double)arg2 options:(const SCD_Struct_FB23*)arg3 toolbox:(id)arg4 ;
+(id)initialState;
-(void)editProfilePictureTapped:(id)arg1 ;
-(void)profilePictureTapped:(id)arg1 ;
@end
