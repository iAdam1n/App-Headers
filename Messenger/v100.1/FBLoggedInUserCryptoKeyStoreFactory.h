/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMigration, FBMigrationRunner, FBLoggedInUserCryptoKeyStore;

@interface FBLoggedInUserCryptoKeyStoreFactory : NSObject {

	FBMigration* _keychainMigration;
	FBMigrationRunner* _migrationRunner;
	FBLoggedInUserCryptoKeyStore* _store;

}
-(void)loadKeyStoreWithCompletion:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(id)initWithKeychainMigration:(id)arg1 migrationRunner:(id)arg2 store:(id)arg3 ;
@end
