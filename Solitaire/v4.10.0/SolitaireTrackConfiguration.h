/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MWSTrackEventDelegate.h>
#import <SolitaireFree/MWSTrackVariableDelegate.h>
#import <SolitaireFree/MWSTrackMessageDelegate.h>

@protocol SolitaireTrackConfigurationDelegate;
@class NSString;

@interface SolitaireTrackConfiguration : NSObject <MWSTrackEventDelegate, MWSTrackVariableDelegate, MWSTrackMessageDelegate> {

	id<SolitaireTrackConfigurationDelegate> _trackDelegate;

}

@property (assign,nonatomic,__weak) id<SolitaireTrackConfigurationDelegate> trackDelegate;              //@synthesize trackDelegate=_trackDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadDefaultCPData;
+(id)loadDefaultCPTrayContents;
+(id)loadDefaultCPCongratsContents;
+(id)loadDefaultCPDataDictionary;
-(void)setTrackDelegate:(id<SolitaireTrackConfigurationDelegate>)arg1 ;
-(unsigned long long)configMessageActionIdentifierID;
-(id)configGetAllMessageParamNames;
-(int)configMessageParamToType:(unsigned long long)arg1 ;
-(id)configMessageTemplateStructure:(unsigned long long)arg1 ;
-(BOOL)configDoMessageTemplate:(unsigned long long)arg1 Data:(id)arg2 ;
-(id)configGetAllMessageActionNames;
-(id)configGetAllMessageTemplateNames;
-(id)configMessageActionStructure:(unsigned long long)arg1 ;
-(BOOL)configDoMessageAction:(unsigned long long)arg1 Data:(id)arg2 ;
-(id)configEventToString:(id)arg1 ;
-(id)configParamToString:(unsigned long long)arg1 Event:(id)arg2 ;
-(id)configProviderToString:(int)arg1 ;
-(id)configGetAllVariableNames;
-(id)configGetAllVariableParamNames;
-(int)configVariableToType:(unsigned long long)arg1 ;
-(id)configVariableToDefault:(unsigned long long)arg1 ;
-(int)configVariableParamToType:(unsigned long long)arg1 ;
-(id)configVariableOfflineKey;
-(id)configParamToString:(unsigned long long)arg1 providerType:(int)arg2 ;
-(id)numberData:(id)arg1 withConstraintMin:(id)arg2 andMax:(id)arg3 ;
-(id)textData:(id)arg1 withConstraintFromList:(id)arg2 ;
-(id<SolitaireTrackConfigurationDelegate>)trackDelegate;
-(id)textDataWithConstraintImageExists:(id)arg1 ;
@end
