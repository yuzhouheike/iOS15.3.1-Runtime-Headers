/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigStateMachine : NSObject {
    unsigned int  _currentState;
    NSString * _label;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _owner;
    bool  _performsAtomicStateTransitions;
    struct FigStateMachineStateConfiguration { bool x1; id x2; id x3; id x4; } * _stateConfigurations;
    BOOL  _stateCount;
}

@property (readonly) unsigned int currentState;
@property (readonly) NSString *currentStateLabel;
@property (readonly) NSString *label;
@property (nonatomic) bool performsAtomicStateTransitions;

+ (void)initialize;

- (unsigned int)currentState;
- (id)currentStateLabel;
- (void)dealloc;
- (id)description;
- (id)initWithLabel:(id)arg1 stateCount:(BOOL)arg2 initialState:(unsigned int)arg3 owner:(id)arg4;
- (id)label;
- (id)labelForState:(unsigned int)arg1;
- (void)markStateAsTerminal:(unsigned int)arg1;
- (bool)performsAtomicStateTransitions;
- (void)setLabel:(id)arg1 forState:(unsigned int)arg2;
- (void)setPerformsAtomicStateTransitions:(bool)arg1;
- (bool)transitionToState:(unsigned int)arg1;
- (bool)transitionToState:(unsigned int)arg1 errorStatus:(int)arg2;
- (bool)transitionToState:(unsigned int)arg1 fromState:(unsigned int)arg2;
- (bool)transitionToState:(unsigned int)arg1 fromStates:(unsigned int)arg2;
- (void)whenTransitioningFromState:(unsigned int)arg1 toState:(unsigned int)arg2 callHandler:(id /* block */)arg3;
- (void)whenTransitioningToState:(unsigned int)arg1 callHandler:(id /* block */)arg2;
- (void)whenTransitioningToStateFails:(unsigned int)arg1 callHandler:(id /* block */)arg2;
- (void)whenTransitioningToStates:(unsigned int)arg1 callHandler:(id /* block */)arg2;
- (void)whenTransitioningToStatesFail:(unsigned int)arg1 callHandler:(id /* block */)arg2;

@end
