/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSURL;

@interface FBDiskStore : NSObject {

	shared_ptr<facebook::mobile::xplat::compactdisk::UnmanagedStore>* _unmanagedStore;
	NSURL* _URL;

}

@property (nonatomic,retain,readonly) NSURL * URL;                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSize; 
-(id)initWithStore:(shared_ptr<facebook::mobile::xplat::compactdisk::UnmanagedStore>*)arg1 ;
-(unsigned long long)maxSize;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
@end

