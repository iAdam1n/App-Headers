/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSFileManager;

@interface IGDirectoryFinder : NSObject {

	NSFileManager* _fileManager;

}

@property (nonatomic,readonly) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
-(id)initWithFileManager:(id)arg1 ;
-(id)URLforUserDomainDirectory:(unsigned long long)arg1 ;
-(id)cachesDirectoryURL;
-(id)documentsDirectoryURL;
-(id)temporaryDirectoryURL;
-(id)init;
-(NSFileManager *)fileManager;
@end

