/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface XMPPConnectionConfiguration : NSObject {

	BOOL _allowsAddressBookAccess;
	BOOL _passiveOnly;

}

@property (assign,nonatomic) BOOL allowsAddressBookAccess;                       //@synthesize allowsAddressBookAccess=_allowsAddressBookAccess - In the implementation block
@property (assign,getter=isPassiveOnly,nonatomic) BOOL passiveOnly;              //@synthesize passiveOnly=_passiveOnly - In the implementation block
-(BOOL)allowsAddressBookAccess;
-(void)setAllowsAddressBookAccess:(BOOL)arg1 ;
-(BOOL)isPassiveOnly;
-(void)setPassiveOnly:(BOOL)arg1 ;
@end

