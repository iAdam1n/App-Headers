/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/NSCoding.h>
#import <Messenger/NSCopying.h>

@class NSString, FBStarRatingsDialogMetadataConfig;

@interface FBStarRatingsDialogMetadata : NSObject <NSCoding, NSCopying> {

	BOOL _esrMode;
	NSString* _experimentName;
	FBStarRatingsDialogMetadataConfig* _appStoreDialogMetadataConfig;
	FBStarRatingsDialogMetadataConfig* _starDialogMetadataConfig;

}

@property (assign) BOOL esrMode;                                                                            //@synthesize esrMode=_esrMode - In the implementation block
@property (nonatomic,copy) NSString * experimentName;                                                       //@synthesize experimentName=_experimentName - In the implementation block
@property (nonatomic,retain) FBStarRatingsDialogMetadataConfig * appStoreDialogMetadataConfig;              //@synthesize appStoreDialogMetadataConfig=_appStoreDialogMetadataConfig - In the implementation block
@property (nonatomic,retain) FBStarRatingsDialogMetadataConfig * starDialogMetadataConfig;                  //@synthesize starDialogMetadataConfig=_starDialogMetadataConfig - In the implementation block
-(NSString *)experimentName;
-(id)initWithExperimentName:(id)arg1 appStoreDialogMetadataConfig:(id)arg2 starDialogMetadataConfig:(id)arg3 ;
-(id)initWithoutMetadata;
-(BOOL)esrMode;
-(void)setEsrMode:(BOOL)arg1 ;
-(void)setExperimentName:(NSString *)arg1 ;
-(void)setAppStoreDialogMetadataConfig:(FBStarRatingsDialogMetadataConfig *)arg1 ;
-(FBStarRatingsDialogMetadataConfig *)starDialogMetadataConfig;
-(void)setStarDialogMetadataConfig:(FBStarRatingsDialogMetadataConfig *)arg1 ;
-(FBStarRatingsDialogMetadataConfig *)appStoreDialogMetadataConfig;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
