/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>

@class CKComponent, FBMemPerson;

@interface FBPYMKFeedUnitPeopleComponentController : CKComponentController {

	CKComponent* _navedAwayFromPersonComponent;
	FBMemPerson* _navedAwayFromPerson;

}

@property (nonatomic,retain) CKComponent * navedAwayFromPersonComponent;              //@synthesize navedAwayFromPersonComponent=_navedAwayFromPersonComponent - In the implementation block
@property (nonatomic,retain) FBMemPerson * navedAwayFromPerson;                       //@synthesize navedAwayFromPerson=_navedAwayFromPerson - In the implementation block
-(void)didAddFriend:(id)arg1 ;
-(void)didOpenProfile:(id)arg1 context:(id)arg2 ;
-(void)personChanged:(id)arg1 ;
-(CKComponent *)navedAwayFromPersonComponent;
-(void)setNavedAwayFromPersonComponent:(CKComponent *)arg1 ;
-(FBMemPerson *)navedAwayFromPerson;
-(void)setNavedAwayFromPerson:(FBMemPerson *)arg1 ;
@end
