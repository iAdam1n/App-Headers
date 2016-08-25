/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MWSTrackValidatorDelegate;
@class MWSTrackDataIdentifiers, NSMutableDictionary, NSObject, NSString;

@interface MWSTrackValidator : NSObject {

	int _type;
	MWSTrackDataIdentifiers* _identifiers;
	NSMutableDictionary* _data;
	NSObject*<MWSTrackValidatorDelegate> _delegate;
	NSString* _resourcePath;

}

@property (assign,nonatomic) int type;                                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) MWSTrackDataIdentifiers * identifiers;                             //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * data;                                        //@synthesize data=_data - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<MWSTrackValidatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * resourcePath;                                           //@synthesize resourcePath=_resourcePath - In the implementation block
+(BOOL)doesShowAllDebugLogs;
+(id)actionValidator;
+(id)templateValidator;
+(id)makeWithType:(int)arg1 Identifiers:(id)arg2 ;
+(BOOL)doesShowErrorLogs;
+(void)setDelegate:(id)arg1 ForType:(int)arg2 ;
+(void)showErrorLogs:(BOOL)arg1 ;
+(void)showAllDebugLogs:(BOOL)arg1 ;
+(void)setDelegateForAllTypes:(id)arg1 ;
-(id)exportDefaultRawDataByName;
-(id)updateWithRawData:(id)arg1 ;
-(id)exportOnlyLiveRawDataByName;
-(id)getDataByIdentifierID:(unsigned long long)arg1 ;
-(void)applyResourcePath:(id)arg1 ;
-(id)makeDefaultStructure:(id)arg1 ToData:(id)arg2 ;
-(void)applyDefaults:(id)arg1 ;
-(id)retrieveCopyWithRawData:(id)arg1 ByID:(unsigned long long)arg2 ;
-(id)updateWithRawData:(id)arg1 ByID:(unsigned long long)arg2 ;
-(id)validateWithOptionalAppSchema:(id)arg1 ;
-(id)exportDataUsingUpdatedData:(BOOL)arg1 ;
-(void)setDelegate:(NSObject*<MWSTrackValidatorDelegate>)arg1 ;
-(NSObject*<MWSTrackValidatorDelegate>)delegate;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSMutableDictionary *)data;
-(void)setData:(NSMutableDictionary *)arg1 ;
-(void)setResourcePath:(NSString *)arg1 ;
-(void)setIdentifiers:(MWSTrackDataIdentifiers *)arg1 ;
-(NSString *)resourcePath;
-(MWSTrackDataIdentifiers *)identifiers;
@end

