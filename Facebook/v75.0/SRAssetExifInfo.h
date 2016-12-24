/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SRAssetExifInfo : NSObject <NSCopying> {

	BOOL _bestGuessIsScreenshot;
	BOOL _bestGuessIsSavedFromAnotherSource;
	NSString* _originalAssetIdentifier;
	unsigned long long _hdrState;

}

@property (nonatomic,copy,readonly) NSString * originalAssetIdentifier;              //@synthesize originalAssetIdentifier=_originalAssetIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL bestGuessIsScreenshot;                           //@synthesize bestGuessIsScreenshot=_bestGuessIsScreenshot - In the implementation block
@property (nonatomic,readonly) BOOL bestGuessIsSavedFromAnotherSource;               //@synthesize bestGuessIsSavedFromAnotherSource=_bestGuessIsSavedFromAnotherSource - In the implementation block
@property (nonatomic,readonly) unsigned long long hdrState;                          //@synthesize hdrState=_hdrState - In the implementation block
-(unsigned long long)hdrState;
-(NSString *)originalAssetIdentifier;
-(id)initWithOriginalAssetIdentifier:(id)arg1 isScreenshot:(BOOL)arg2 isSavedFromAnotherSource:(BOOL)arg3 hdrState:(unsigned long long)arg4 ;
-(BOOL)bestGuessIsScreenshot;
-(BOOL)bestGuessIsSavedFromAnotherSource;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
