/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:35:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BAB6B524-089F-49C7-9E02-F76A6A5EBF73/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <CARROT/CARROT-Structs.h>
@interface FlurryPLCrashHostInfo : NSObject {

	PLCrashHostInfoVersion _darwinVersion;

}

@property (nonatomic,readonly) PLCrashHostInfoVersion darwinVersion;              //@synthesize darwinVersion=_darwinVersion - In the implementation block
+(id)currentHostInfo;
-(PLCrashHostInfoVersion)darwinVersion;
-(id)init;
@end

