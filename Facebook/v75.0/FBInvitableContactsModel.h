/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBContactImporterAddressbookPerson, UIImage;

@interface FBInvitableContactsModel : NSObject {

	FBContactImporterAddressbookPerson* _abPerson;
	UIImage* _image;

}

@property (nonatomic,readonly) FBContactImporterAddressbookPerson * abPerson;              //@synthesize abPerson=_abPerson - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                            //@synthesize image=_image - In the implementation block
-(id)primaryCredential;
-(FBContactImporterAddressbookPerson *)abPerson;
-(id)initWithAddressbookPerson:(id)arg1 image:(id)arg2 ;
-(id)name;
-(UIImage *)image;
-(id)contactIdentifier;
@end
