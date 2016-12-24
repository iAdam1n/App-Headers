/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:48:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/C8BBB3B7-A738-4D43-8A19-90B2CFB12AE1/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSArray, NSDictionary;

@interface OASServerInstallResponse : NSObject <NSCopying> {

	NSURL* _appURL;
	NSString* _DPInfo;
	NSArray* _profiles;
	NSDictionary* _iTunesMetadata;
	NSArray* _pairedDevices;

}

@property (nonatomic,retain) NSURL * appURL;                             //@synthesize appURL=_appURL - In the implementation block
@property (nonatomic,retain) NSString * DPInfo;                          //@synthesize DPInfo=_DPInfo - In the implementation block
@property (nonatomic,retain) NSArray * profiles;                         //@synthesize profiles=_profiles - In the implementation block
@property (nonatomic,retain) NSDictionary * iTunesMetadata;              //@synthesize iTunesMetadata=_iTunesMetadata - In the implementation block
@property (nonatomic,retain) NSArray * pairedDevices;                    //@synthesize pairedDevices=_pairedDevices - In the implementation block
+(id)responseFromDataObject:(id)arg1 ;
-(NSDictionary *)iTunesMetadata;
-(NSURL *)appURL;
-(NSString *)DPInfo;
-(void)setAppURL:(NSURL *)arg1 ;
-(void)setITunesMetadata:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProfiles:(NSArray *)arg1 ;
-(NSArray *)profiles;
-(NSArray *)pairedDevices;
-(void)setPairedDevices:(NSArray *)arg1 ;
-(void)setDPInfo:(NSString *)arg1 ;
@end
