/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SLKChannelGenerics;
@class NSString, NSDictionary, NSData;

@interface SLFileUpload : NSObject {

	BOOL _didCancel;
	id<SLKChannelGenerics> _genericChannel;
	NSString* _fileName;
	NSString* _extension;
	NSString* _mimeType;
	NSString* _title;
	NSDictionary* _params;
	NSData* _data;

}

@property (nonatomic,retain) id<SLKChannelGenerics> genericChannel;              //@synthesize genericChannel=_genericChannel - In the implementation block
@property (nonatomic,retain) NSString * fileName;                                //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSString * extension;                               //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSString * mimeType;                                //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDictionary * params;                              //@synthesize params=_params - In the implementation block
@property (nonatomic,retain) NSData * data;                                      //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL didCancel;                                     //@synthesize didCancel=_didCancel - In the implementation block
-(id<SLKChannelGenerics>)genericChannel;
-(void)setGenericChannel:(id<SLKChannelGenerics>)arg1 ;
-(void)setParams:(NSDictionary *)arg1 ;
-(void)setDidCancel:(BOOL)arg1 ;
-(NSDictionary *)params;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)mimeType;
-(NSString *)extension;
-(void)setExtension:(NSString *)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(BOOL)didCancel;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end

