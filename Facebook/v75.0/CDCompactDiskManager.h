/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface CDCompactDiskManager : NSObject {

	shared_ptr<compactdisk::experimental::CompactDiskManager>* _compactDiskManager;

}
+(id)sharedInstance;
-(id)getDiskCache:(id)arg1 configFactory:(/*^block*/id)arg2 ;
-(id)initWithCompactDiskManager:(shared_ptr<compactdisk::experimental::CompactDiskManager>*)arg1 ;
-(id)getMigratedDiskCache:(id)arg1 configFactory:(/*^block*/id)arg2 ;
@end
