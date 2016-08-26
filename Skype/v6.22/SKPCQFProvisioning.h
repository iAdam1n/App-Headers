/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPProvisioningSubclass.h>

@interface SKPCQFProvisioning : SKPProvisioningSubclass {

	long long _cqfS2SPercent;
	long long _cqfPSTNPercent;
	long long _cqfGroupCallPercent;
	double _cqfMinCallDurationSecs;

}

@property (assign,nonatomic) long long cqfS2SPercent;                    //@synthesize cqfS2SPercent=_cqfS2SPercent - In the implementation block
@property (assign,nonatomic) long long cqfPSTNPercent;                   //@synthesize cqfPSTNPercent=_cqfPSTNPercent - In the implementation block
@property (assign,nonatomic) long long cqfGroupCallPercent;              //@synthesize cqfGroupCallPercent=_cqfGroupCallPercent - In the implementation block
@property (assign,nonatomic) double cqfMinCallDurationSecs;              //@synthesize cqfMinCallDurationSecs=_cqfMinCallDurationSecs - In the implementation block
-(id)defaultValuesForPropertyKeys;
-(void)didUpdateValuesForECSKeys:(id)arg1 ;
-(id)ECSAgentName;
-(id)ECSKeysToPropertyKeysMapping;
-(id)treeNodeChildObjectValueForKey:(id)arg1 ;
-(void)setCqfS2SPercent:(long long)arg1 ;
-(void)setCqfPSTNPercent:(long long)arg1 ;
-(void)setCqfGroupCallPercent:(long long)arg1 ;
-(void)setCqfMinCallDurationSecs:(double)arg1 ;
-(void)logUpdatedConfiguration;
-(double)cqfMinCallDurationSecs;
-(long long)cqfS2SPercent;
-(long long)cqfPSTNPercent;
-(long long)cqfGroupCallPercent;
@end
